# AP1 - Ex1
## First assignment in Advanced Programming 1
![uml](http://www.plantuml.com/plantuml/png/fLF1Qjmm4BtxAyGMWhR9_a099h1jMkZYIqbwLgInLrIMZ3Hk3ct_lMCvQzcM6mevBNupyzxJpDkxWC9ZtvhYthXdyBU_3mScZGX1rnhK2CvhlSsgHKJORbtOiL_5mOeMs0SMq6lR50UbIT3A0LAkVp9GNBFZQewFbPlD7taMdabd0xxV4ybwbkWQm8f4-NwI9J00VdoHvW_P4ww6tfzEA-fq7NY1pfSygaI5hFV9EHEb4ki-FUdFj9BZjySlmYhpienQ6wYM2mcTqNZI5lY8H2SWoS3j29IaasYYJFgacWUX2E3pnIIE9TN0zUmrmZ2mB4qRIEQLG97SqsW2ee_vDrKbEK68wxhiAjnxrpv67SQt7Lr5bfdZzRxBYVh1lfayFtt9XXThY-1h8O7jKdRVoRuxWQY_QuNdwReJV0BRBF0EK1Xgpi5rw_Kow6pxT_1zINK3-AcNHYiGTehS6D0Kopn_NwlgCzWXq11F-0FFH-C21Dpw5zpyymPKqXPVlnA5sroi1VuAquRoHlhwh2k-81l-dotcGoHq1rRrhVaB)

## What is KNN Clasifier
In statistics, the k-nearest neighbors algorithm (k-NN) is a non-parametric classification method first developed by Evelyn Fix and Joseph Hodges in 1951, and later expanded by Thomas Cover. It is used for classification and regression. In both cases, the input consists of the k closest training examples in data set. The output depends on whether k-NN is used for classification or regression:

In k-NN classification, the output is a class membership. An object is classified by a plurality vote of its neighbors, with the object being assigned to the class most common among its k nearest neighbors (k is a positive integer, typically small). If k = 1, then the object is simply assigned to the class of that single nearest neighbor.


## How To Run The Classifier
In Order to run our classifier, you will need to have two csv files

 - *classified.csv* - data set which contains 3 kinds of irises (versicolor, virginica, setosa), for every iris you will need to assign four properties (width, sepal length, sepal width, petal length). this dataset is being use to classify other irises, therefore this dataset will contain all irises with their known type.

Example:

5.4,3.9,1.7,0.4,Iris-setosa
5.0,2.0,3.5,1.0,Iris-versicolor
6.3,2.7,4.9,1.8,Iris-virginica


 - *unclassified.csv* - a dataset which contains the unclassified irises 4 values.

Example:

4.6,3.1,1.5,0.2
6.9,3.1,4.9,1.5
6.3,3.3,6,2.5


Clone the git using

git clone https://github.com/idanturkenits/AP1-ex1

now you can cd to the file and run it (if you run it using Cmake it will work fine, otherwise you will need to create a new folder, cd to it, and run the program from there)

Have Fun Classifying!