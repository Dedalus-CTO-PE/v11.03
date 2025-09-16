create table outxwpaf
(
dotxwout    char(8),
dotxwlin    char(4),
otxwdesc    char(70),
otxwspar    char(10),
lf          char(1)
);
create unique index outxwpa1 on outxwpaf
(
dotxwout,
dotxwlin
);
revoke all on outxwpaf from public ; 
grant select on outxwpaf to public ; 
