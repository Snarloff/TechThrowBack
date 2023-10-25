from django.db import models
from django.contrib.auth.models import (
	AbstractBaseUser, PermissionsMixin, UserManager
)
from django.conf import settings
from django.shortcuts import reverse

CATEGORY_CHOICE = (
	("S", "Shorts"),
	("D", "Dress"),
	("SH", "Shirt")
)

LABEL_CHOICE = (
	("p", "primary"),
	("d", "danger"),
	("s", "secondary")
)

class Item(models.Model):
	title = models.CharField(max_length=100)
	price = models.FloatField()
	slug = models.SlugField()
	description = models.TextField()
	category = models.CharField(choices=CATEGORY_CHOICE, max_length=2)
	label = models.CharField(choices=LABEL_CHOICE, max_length=1)
	discount_price = models.FloatField(blank=True, null=True)
	image = models.ImageField()
	created = models.DateTimeField("Criada em", auto_now_add=True)

	def __str__(self):
		return self.title

	def get_absolute_url(self):
		return reverse("shop:product", kwargs={
			"slug": self.slug})

class OrderItem(models.Model):
	item = models.ForeignKey(Item, on_delete=models.CASCADE)

	def __str__(self):
		return self.title

class Order(models.Model):
	user = models.ForeignKey(settings.AUTH_USER_MODEL, on_delete=models.CASCADE)
	items = models.ManyToManyField(OrderItem)
	start_date = models.DateTimeField("Pedido em", auto_now_add=True)
	ordered_date = models.DateTimeField()
	ordered = models.BooleanField(default=False)

	def __str__(self):
		return self.user.username