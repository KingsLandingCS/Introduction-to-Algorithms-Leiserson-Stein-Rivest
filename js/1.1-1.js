products = [
    {name: "Personal-Computer", price: 1500},
    {name: "Laptop", price: 600},
    {name: "Car", price: 3500},
    {name: "Phone", price: 350}

];


products.sort((a, b) => a.price - b.price);

products.forEach(product => {

    console.log(`${product.name}: $${product.price}`);
});


