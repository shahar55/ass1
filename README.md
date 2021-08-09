# Advanced Programming 1 - Ex1
## First assignment in Advanced Programming 1
![ass1UML](https://user-images.githubusercontent.com/84286628/128748450-8dc6c3c3-e27c-4e55-97c1-d9eabba910d1.png)

## Overview
This assignment was created during the course *"Advanced Programming 1"* at Bar-Ilan University and implements ["KNN algorithm"](https://en.wikipedia.org/wiki/K-nearest_neighbors_algorithm):

>K Nearest Neighbor algorithm falls under the Supervised Learning category and is used for classification (most commonly) and regression. It is a versatile algorithm also used for imputing missing values and resampling datasets. As the name (K Nearest Neighbor) suggests it considers K Nearest Neighbors (Data points) to predict the class or continuous value for the new Datapoint.




## How To Run The Classifier
In Order to run our classifier, you will need to have two csv files

 - *classified.csv* - data set which contains 3 kinds of irises (versicolor, virginica, setosa), for every iris you will need to assign four properties (width, sepal length, sepal width, petal length). this dataset is being use to classify other irises, therefore this dataset will contain all irises with their known type.

 - *unclassified.csv* - a dataset which contains the unclassified irises 4 values.


Clone the git using


now you can cd to the file and run it (if you run it using Cmake it will work fine, otherwise you will need to create a new folder, cd to it, and run the program from there)

```ruby
gcc compile
```
