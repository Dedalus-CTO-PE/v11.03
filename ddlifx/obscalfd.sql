create table obscalaf
(
obclvisn    char(8),
obclcntr    char(3),
obclcall    char(127),
obclspar    char(50),
lf          char(1)
);
create unique index obscala1 on obscalaf
(
obclvisn,
obclcntr
);
revoke all on obscalaf from public ; 
grant select on obscalaf to public ; 
