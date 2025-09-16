create table watpnpaf
(
dwtnpboo    char(8),
wtnpurno    char(8),
wtnpcode    char(9),
dwtnpcnt    char(2),
wtnpdret    char(8),
wtnpdchg    char(8),
wtnpoutc    char(3),
wtnpreas    char(3),
wtnpcomm    char(50),
wtnpncnt    char(2),
wtnpspar    char(18),
lf          char(1)
);
create unique index watpnpa1 on watpnpaf
(
dwtnpboo
);
create unique index watpnpa2 on watpnpaf
(
wtnpurno,
wtnpcode,
dwtnpcnt,
dwtnpboo
);
revoke all on watpnpaf from public ; 
grant select on watpnpaf to public ; 
