import numpy as np
import pandas as pd
import sklearn

import matplotlib.pyplot as plt
%matplotlib inline
cars = pd.read_csv('car_price.csv', encoding='ISO-8859-1',  names=['id', 'sellTime', 'name', 'usage', 'offer', 'price', 'type', 'yearOfManufacture', 'gear', 'horsepower', 'kms', 'mileage', 'fuelType', 'secondhand', 'datePurchased', 'zero'])
cars.head(5)
cars[cars.duplicated()]
cars.nunique().sort_values()
cars.drop(columns=['id', 'name', 'datePurchased', 'sellTime', 'usage', 'offer', 'zero'], inplace=True) 
# NULL Handling
cars.replace('NA', np.nan, inplace=True)
# removing null values
cars.dropna(inplace = True)
# Categorical boolean mask
categorical_feature_mask = cars.dtypes==object
# filter categorical columns using mask and turn it into a list
categorical_cols = cars.columns[categorical_feature_mask].tolist()
# import labelencoder
from sklearn.preprocessing import LabelEncoder
# instantiate labelencoder object
le = LabelEncoder()
# apply le on categorical feature columns
cars[categorical_cols] = cars[categorical_cols].apply(lambda col: le.fit_transform(col))
## Split the data into train and test set
from sklearn.model_selection import train_test_split

X_train, X_test, Y_train, Y_test = train_test_split(cars[cars.columns[~cars.columns.isin(['price'])]], 
                                                    cars['price'], 
                                                    test_size = 0.33, 
                                                    random_state = 5)
print(X_train.shape)
print(X_test.shape)
print(Y_train.shape)
print(Y_test.shape)
## Creating model
from sklearn.linear_model import LinearRegression

lm = LinearRegression()
lm.fit(X_train, Y_train)
lm.intercept_
lm.coef_
pd.DataFrame(zip(X_train.columns, lm.coef_.tolist()), columns=["names","coefficient"])
Y_pred = lm.predict(X_test)

plt.scatter(Y_test, Y_pred)
plt.xlabel("Actual Prices")
plt.ylabel("Predicted prices")
plt.title("Prices vs Predicted prices")
#plt.figure(figsize=(250,250))
fig = plt.gcf()
fig.set_size_inches(18.5, 10.5)
from sklearn.metrics import mean_squared_error
# model evaluation for training set
y_train_predict = lm.predict(X_train)
rmse1 = (np.sqrt(mean_squared_error(Y_train, y_train_predict)))


print("The model performance for training set")
print("--------------------------------------")
print('RMSE is {}'.format(rmse1))
print("\n")

# model evaluation for testing set
y_test_predict = lm.predict(X_test)
rmse2 = (np.sqrt(mean_squared_error(Y_test, y_test_predict)))



print("The model performance for testing set")
print("--------------------------------------")
print('RMSE is {}'.format(rmse2))

print("\nThe difference is {}".format(abs(rmse1-rmse2)))
