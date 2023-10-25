from django.shortcuts import render
from .models import Item
from django.views.generic import ListView, DetailView

class ItemDetailView(DetailView):
	model = Item
	template_name = "products.html"
