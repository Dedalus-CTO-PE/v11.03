create table primgpaf
(
prmgdate    char(8),
prmgvalu    decimal(5,2),
prmgspar    char(40),
lf          char(1)
);
create unique index primgpa1 on primgpaf
(
prmgdate
);
revoke all on primgpaf from public ; 
grant select on primgpaf to public ; 
