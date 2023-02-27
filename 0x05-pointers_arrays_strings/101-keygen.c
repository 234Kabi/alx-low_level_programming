 for (index = 0; password[index]; index++)
 {
 	if (password[index] >= (33 + diff_half1))
 	{
 		password[index] -= diff_half1;
 		break;
 	}
 }

 for (index = 0; password[index]; index++)
 {
 	if (password[index] >= (33 + diff_half2))
 	{
 		password[index] -= diff_half2;
 		break;
 	}
 }

