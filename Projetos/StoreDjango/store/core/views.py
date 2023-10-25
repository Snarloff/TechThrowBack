from django.shortcuts import render, redirect
from allauth.account.signals import password_changed
from django.dispatch import receiver
from time import sleep
from django.views.generic import ListView
from ..shop.models import Item

class HomeView(ListView):
	model = Item
	template_name = "index.html"

@receiver(password_changed)
def password_change_callback(sender, request, user, **kwargs):
	return redirect("/")

def about(request):
	return render(request, "about.html")
