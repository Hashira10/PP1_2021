import { Component, Input } from '@angular/core';

import { products1, Product } from '../products';

import { Category,category1 } from "../category";

@Component({
  selector: 'app-product-list',
  templateUrl: './product-list.component.html',
  styleUrls: ['./product-list.component.css']
})
export class ProductListComponent {
  products1 = [...products1];
  categories = [...category1];
  @Input() products: Product[] = [];
  share() {
    window.alert('The product has been shared!');
  }

  onNotify() {
    window.alert('You will be notified when the product goes on sale');
  }

  filterCategory(event: any){
    let value = event.target.value;
    console.log(value);
  }

}


/*
Copyright Google LLC. All Rights Reserved.
Use of this source code is governed by an MIT-style license that
can be found in the LICENSE file at https://angular.io/license
*/
