
#include "sfw.h"

#include "test/mlpp_tests.h"
#include "test/mlpp_matrix_tests.h"

int main() {
	SFWCore::setup();

	Ref<MLPPTests> tests;
	tests.instance();

	tests->_breast_cancer_data_path = "datasets/BreastCancer.csv";
	tests->_breast_cancer_svm_data_path = "datasets/BreastCancerSVM.csv";
	tests->_california_housing_data_path = "datasets/CaliforniaHousing.csv";
	tests->_fires_and_crime_data_path = "datasets/FiresAndCrime.csv";
	tests->_iris_data_path = "datasets/Iris.csv";
	tests->_mnist_test_data_path = "datasets/MnistTest.csv";
	tests->_mnist_train_data_path = "datasets/MnistTrain.csv";
	tests->_wine_data_path = "datasets/Wine.csv";

	tests->test_statistics();
	tests->test_multivariate_linear_regression_gradient_descent(false);
	tests->test_softmax_regression(false);

	SFWCore::cleanup();

	return 0;
}
