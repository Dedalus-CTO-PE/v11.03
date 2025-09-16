create table ceambpaf
(
  cembmcc     char(9) default ' ' not null,
  cembspc     char(3) default ' ' not null,
  cembpsc     char(7) default ' ' not null,
  cembdqty    decimal(8,2) default 0 not null,
  cembtqty    decimal(8,2) default 0 not null,
  cembspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceambpa1 on ceambpaf
(
cembmcc,
cembspc,
cembpsc
);
revoke all on ceambpaf from public ; 
grant select on ceambpaf to public ; 
