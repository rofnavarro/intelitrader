#include <iostream>
#include <vector>

typedef struct	s_offer
{
	int		position;
	double	value;
	int		quantity;
}	t_offer;

typedef enum	e_action
{
	INSERIR,
	MODIFICAR,
	DELETAR,
}	t_action;

typedef struct	s_notification
{
	t_offer		offer;
	t_action	action;
}	t_notification;

std::ostream	&operator<<(std::ostream &lhs, const t_offer &rhs)
{
	lhs << rhs.position << "," << rhs.value << "," << rhs.quantity << "\n";
	return (lhs);
}

static void	parse_input(std::string &input, t_notification &notif)
{
	size_t			start = 0;
	size_t			end;

	end = input.find(",", start);
	notif.offer.position = std::stoi(input.substr(start, end - start));
	start = end + 1;
	end = input.find(",", start);
	notif.action = static_cast<t_action>(std::stoi(input.substr(start, end - start)));
	start = end + 1;
	end = input.find(",", start);
	notif.offer.value = std::stod(input.substr(start, end - start));
	start = end + 1;
	end = input.size();
	notif.offer.quantity = std::stoi(input.substr(start, end - start));
	return ;
}

static void	modify_offer(std::vector<t_offer> &offers, t_notification &notif)
{
	for (size_t i = 0; i < offers.size(); i++)
	{
		if (offers[i].position == notif.offer.position)
		{
			if (notif.offer.value != 0)
				offers[i].value = notif.offer.value;
			if (notif.offer.quantity != 0)
				offers[i].quantity = notif.offer.quantity;
			return ;
		}
	}
	return ;
}

static void	delete_offer(std::vector<t_offer> &offers, t_notification &notif)
{
	for (size_t i = 0; i < offers.size(); i++)
	{
		if (offers[i].position == notif.offer.position)
		{
			offers.erase(offers.begin() + i);
			return ;
		}
	}
	return ;
}

static void	sort_offers(std::vector<t_offer> &offers)
{
	for (size_t i = 0; i < offers.size(); i++)
	{
		for (size_t j = i + 1; j < offers.size(); j++)
		{
			if (offers[i].position > offers[j].position)
			{
				t_offer	ref;

				ref = offers[i];
				offers[i] = offers[j];
				offers[j] = ref;
			}
		}
	}
	int	position = 1;

	for (size_t i = 0; i < offers.size(); i++)
	{
		if (offers[i].position != position)
			offers[i].position = position;
		position++;
	}
	return ;
}

static void	print_offers(std::vector<t_offer> &offers)
{
	for (size_t i = 0; i < offers.size(); i++)
		std::cout << offers[i];
	return ;
}

int	main(void)
{
	int	notifications;
	std::vector<t_offer>	offers;

	std::cin >> notifications;
	std::cin.ignore();
	for (int i = 0; i < notifications; i++)
	{
		t_notification	notif;
		std::string		input;

		std::getline(std::cin, input);
		parse_input(input, notif);
		if (notif.action == INSERIR)
			offers.push_back(notif.offer);
		else if (notif.action == MODIFICAR)
			modify_offer(offers, notif);
		else if (notif.action == DELETAR)
			delete_offer(offers, notif);
		sort_offers(offers);
	}
	print_offers(offers);
	return (0);
}