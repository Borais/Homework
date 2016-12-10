#include <stdio.h>>

int main(void)
{
	char inputType;
	double inputValue;
	double celsiumValue;
	double fahrenheitValue;
	double kelvinValue;

	printf("Write type of temperature\n");
	printf("C - celsium\n");
	printf("F - fahrenheit\n");
	printf("K - kelvin\n");

	scanf("%s", &inputType);

	switch (inputType)
	{
	case 67:
		printf("Write celsium value\n");

		scanf("%.2lf", celsiumValue);
		farengateValue = 1.8 * celsiumValue + 32;
		kelvinValue = celsiumValue + 273;

		printf("Farengate value - %.2lf\n", fahrenheitValue);
		printf("Kelvin value - %.2lf\n", kelvinValue);
		break;

	case 70:
		printf("Write fahrenheit value\n");

		scanf("%.2lf", fahrenheitValue);
		celsiumValue = (fahrenheitValue - 32) / 1.8;
		kelvinValue = celsiumValue + 273;

		printf("Celsium value - %.2lf\n", celsiumValue);
		printf("Kelvin value - %.2lf\n", kelvinValue);
		break;

	case 75:
		printf("Write kelvin value\n");

		scanf("%.2lf", kelvinValue);
		celsiumValue = kelvinValue - 273;
		fahrenheitValue = 1.8 * celsiumValue + 32;

		printf("Celsium value - %.2lf\n", celsiumValue);
		printf("Farengate value - %.2lf\n", fahrenheitValue);
		break;

	default:
		printf("Write correct type!\n");
		break;
	}


	return 0;
}
