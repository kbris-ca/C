#include <stdio.h>
#include <unistd.h>

int	ft_print_combn2(int n)
{
	if(n <= 0 || n >= 10)
		printf("I'm so sorry but 'int n' should be in a range between '0' and '10' without to include '0' or '10'\n");
	else
	{
		if(n == 1)
		{
			char	auxletter;

			auxletter = '0';
			while(auxletter <= '9')
			{
				write(1, &auxletter, 1);
				if(auxletter < '9')
					write(1, ", ", 2);
				else
					write(1, "\n", 1 );
				auxletter++;
			}
		}
		else if(n == 2)
		{
			char	array[2];

			array[0] = '0';
			while(array[0] <= '8')
			{
				array[1] = array[0] + 1;
				while(array[1] <= '9')
				{
					write(1, &array[0], 1);
					write(1, &array[1], 1);
					if(!(array[0] == '8' && array[1] == '9'))
						write(1, ", ", 2);
					array[1]++;
				}
				array[0]++;
			}
		}
		else if(n == 3)
		{
			char	array[3];

			array[0] = '0';
			while(array[0] <= '7')
			{
				array[1] = array[0] + 1;
				while(array[1] <= '8')
				{
					array[2] = array[1] + 1;
					while(array[2] <= '9')
					{
						write(1, &array[0], 1);
						write(1, &array[1], 1);
						write(1, &array[2], 1);
						if(!(array[0] == '7' && array[1] == '8' && array[2] == '9'))
							write(1, ", ", 2);
						array[2]++;
					}
					array[1]++;
				}
				array[0]++;
			}
		}
		else if(n == 4)
		{
			char	array[4];
		
			array[0] = '0';
			while(array[0] <= '6')
			{
				array[1] = array[0] + 1;
				while(array[1] <= '7')
				{
					array[2] = array[1] + 1;
					while(array[2] <= '8')
					{
						array[3] = array[2] + 1;
						while(array[3] <= '9')
						{
							write(1, &array[0], 1);
							write(1, &array[1], 1);
							write(1, &array[2], 1);
							write(1, &array[3], 1);
							if(!(array[0] == '6' && array[1] == '7' && array[2] == '8' && array[3] == '9'))
								write(1, ", ", 2);
							array[3]++;
						}
						array[2]++;
					}
					array[1]++;
				}
				array[0]++;
			}
		}
		else if(n == 5)
		{
			char	array[5];

			array[0] = '0';
			while(array[0] <= '5')
			{
				array[1] = array[0] + 1;
				while(array[1] <= '6')
				{
					array[2] = array[1] + 1;
					while(array[2] <= '7')
					{
						array[3] = array[2] + 1;
						while(array[3] <= '8')
						{
							array[4] = array[3] + 1;
							while(array[4] <= '9')
							{
								write(1, &array[0], 1);
								write(1, &array[1], 1);
								write(1, &array[2], 1);
								write(1, &array[3], 1);
								write(1, &array[4], 1);
								if(!(array[0] == '5' && array[1] == '6' && array[2] == '7' && array[3] == '8' && array[4] == '9'))
									write(1, ", ", 2);
								array[4]++;
							}
							array[3]++;
						}
						array[2]++;
					}
					array[1]++;
				}
				array[0]++;
			}
		}
		else if(n == 6)
		{
			char	array[6];

			array[0] = '0';
			while(array[0] <= '4')
			{
				array[1] = array[0] + 1;
				while(array[1] <= '5')
				{
					array[2] = array[1] + 1;
					while(array[2] <= '6')
					{
						array[3] = array[2] + 1;
						while(array[3] <= '7')
						{
							array[4] = array[3] + 1;
							while(array[4] <= '8')
							{
								array[5] = array[4] + 1;
								while(array[5] <= '9')
								{
									write(1, &array[0], 1);
									write(1, &array[1], 1);
									write(1, &array[2], 1);
									write(1, &array[3], 1);
									write(1, &array[4], 1);
									write(1, &array[5], 1);


									if(!(array[0] == '4' && array[1] == '5' && array[2] == '6' && array[3] == '7' && array[4] == '8' && array[5] == '9'))
										write(1, ", ", 2);
									array[5]++;
								}
								array[4]++;
							}
							array[3]++;
						}
						array[2]++;
					}
					array[1]++;
				}
				array[0]++;
			}
		}
		else if(n == 7)
		{
			char	array[7];

			array[0] = '0';
			while(array[0] <= '3')
			{
				array[1] = array[0] + 1;
				while(array[1] <= '4')
				{
					array[2] = array[1] + 1;
					while(array[2] <= '5')
					{
						array[3] = array[2] + 1;
						while(array[3] <= '6')
						{
							array[4] = array[3] + 1;
							while(array[4] <= '7')
							{
								array[5] = array[4] + 1;
								while(array[5] <= '8')
								{
									array[6] = array[5] + 1;
									while(array[6] <= '9')
									{
										write(1, &array[0], 1);
										write(1, &array[1], 1);
										write(1, &array[2], 1);
										write(1, &array[3], 1);
										write(1, &array[4], 1);
										write(1, &array[5], 1);
										write(1, &array[6], 1);
										if(!(array[0] == '3' && array[1] == '4' && array[2] == '5' && array[3] == '6' && array[4] == '7' && array[5] == '8' && array[6] == '9'))
											write(1, ", ", 2);
										array[6]++;
									}
								array[5]++;
								}
								array[4]++;
							}
							array[3]++;
						}
						array[2]++;
					}
					array[1]++;
				}
				array[0]++;
			}
		}
		else if(n == 8)
		{
			char	array[8];

			array[0] = '0';
			while(array[0] <= '2')
			{
				array[1] = array[0] + 1;
				while(array[1] <= '3')
				{
					array[2] = array[1] + 1;
					while(array[2] <= '4')
					{
						array[3] = array[2] + 1;
						while(array[3] <= '5')
						{
							array[4] = array[3] + 1;
							while(array[4] <= '6')
							{
								array[5] = array[4] + 1;
								while(array[5] <= '7')
								{
									array[6] = array[5] + 1;
									while(array[6] <= '8')
									{
										array[7] = array[6] + 1;
										while(array[7] <= '9')
										{
											write(1, &array[0], 1);
											write(1, &array[1], 1);
											write(1, &array[2], 1);
											write(1, &array[3], 1);
											write(1, &array[4], 1);
											write(1, &array[5], 1);
											write(1, &array[6], 1);
											write(1, &array[7], 1);
											if(!(array[0] == '2' && array[1] == '3' && array[2] == '4' && array[3] == '5' && array[4] == '6' && array[5] == '7' && array[6] == '8' && array[7] == '9'))
												write(1, ", ", 2);
											array[7]++;
										}
										array[6]++;
									}
								array[5]++;
								}
								array[4]++;
							}
							array[3]++;
						}
						array[2]++;
					}
					array[1]++;
				}
				array[0]++;
			}
		}
		else
		{
			char	array[9];

			array[0] = '0';
			while(array[0] <= '1')
			{
				array[1] = array[0] + 1;
				while(array[1] <= '2')
				{
					array[2] = array[1] + 1;
					while(array[2] <= '3')
					{
						array[3] = array[2] + 1;
						while(array[3] <= '4')
						{
							array[4] = array[3] + 1;
							while(array[4] <= '5')
							{
								array[5] = array[4] + 1;
								while(array[5] <= '6')
								{
									array[6] = array[5] + 1;
									while(array[6] <= '7')
									{
										array[7] = array[6] + 1;
										while(array[7] <= '8')
										{
											array[8] = array[7] + 1;
											while(array[8] <= '9')
											{
												write(1, &array[0], 1);
												write(1, &array[1], 1);
												write(1, &array[2], 1);
												write(1, &array[3], 1);
												write(1, &array[4], 1);
												write(1, &array[5], 1);
												write(1, &array[6], 1);
												write(1, &array[7], 1);
												write(1, &array[8], 1);
												if(!(array[0] == '1' && array[1] == '2' && array[2] == '3' && array[3] == '4' && array[4] == '5' && array[5] == '6' && array[6] == '7' && array[7] == '8' && array[8] == '9'))
													write(1, ", ", 2);
												array[8]++;
											}
											array[7]++;
										}
										array[6]++;
									}
								array[5]++;
								}
								array[4]++;
							}
							array[3]++;
						}
						array[2]++;
					}
					array[1]++;
				}
				array[0]++;
			}

		}
	}
}

int	main(void)
{
	ft_print_combn2(7);
	return 0;
}
