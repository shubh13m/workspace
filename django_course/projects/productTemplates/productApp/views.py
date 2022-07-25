from django.shortcuts import render

# Create your views here.

def electronics(request):
    product = {'heading':'Elec','product1':'HP','product2':'MAC','product3':'Dell' }
    return render(request, 'products.html', product)

def toys(request):
    product = {'heading':'Toys','product1':'car','product2':'bus','product3':'bike' }
    return render(request, 'products.html', product)

def shoes(request):
    product = {'heading':'Shoes','product1':'addidas','product2':'puma','product3':'nike' }
    return render(request, 'products.html', product)


def index(request):
    return render(request,'index.html')