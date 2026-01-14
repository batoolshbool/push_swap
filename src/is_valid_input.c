/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshbool <bshbool@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:04:04 by bshbool           #+#    #+#             */
/*   Updated: 2026/01/14 16:04:33 by bshbool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long ft_atol(const char *str)
{
    long result;
    int i;
    int sign;

    result = 0;
    i = 0;
    sign = 1;
    if (!str)
        return (0);
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] == '0' && str[i + 1])
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

/*
** is_number_valid:
** Checks if a string is a valid number for push_swap.
** 1. Not empty
** 2. Only digits (after optional '+' or '-')
** 3. No overflow (must fit in int)
*/

static int is_number_valid(const char *str)
{
    long num;
    int i;
    int j;

    i = 0;
    if (!str || !str[0])
        return (0);
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (!str[i])
        return (0);
    j = i;
    while (str[j])
    {
        if (str[j] < '0' || str[j] > '9')
            return (0);
        j++;
    }
    num = ft_atol(str);
    if (num < INT_MIN || num > INT_MAX)
        return (0);
    return (1);
}

/*
** has_duplicates:
** Checks for duplicate numbers in the input array.
** Returns 1 if there is a duplicate, 0 if all numbers are unique.
*/

static int has_duplicates(char **numbers)
{
    int i;
    int j;

    i = 0;
    while (numbers[i])
    {
        j = i + 1;
        while (numbers[j])
        {
            if (ft_atol(numbers[i]) == ft_atol(numbers[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

/*
** is_valid_input:
** Checks the entire input for push_swap:
** 1. Not NULL
** 2. Each string is a valid number
** 3. No duplicates
** Returns 1 if valid, 0 if invalid
*/

int is_valid_input(char **numbers)
{
    int i;

    i = 0;
    if (!numbers || !numbers[0])
        return (0);
    while (numbers[i])
    {
        if (!is_number_valid(numbers[i]))
            return (0);
        i++;
    }
    if (has_duplicates(numbers))
        return (0);
    return (1);
}