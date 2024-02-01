from django.urls import path, include
from .views import  ItemDetailView

app_name = "shop"

urlpatterns = [
	path("<slug>/", ItemDetailView.as_view(), name="product")
]