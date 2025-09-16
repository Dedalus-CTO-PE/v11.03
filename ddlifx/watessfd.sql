create table watessaf
(
wtssyear    char(4),
wtssrunn    char(3),
wtssdate    char(8),
wtssspar    char(26),
lf          char(1)
);
create unique index watessa1 on watessaf
(
wtssyear,
wtssrunn
);
create unique index watessa2 on watessaf
(
wtssdate,
wtssyear,
wtssrunn
);
revoke all on watessaf from public ; 
grant select on watessaf to public ; 
