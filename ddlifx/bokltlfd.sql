create table bokltlaf
(
bkllseid    char(4),
bkllbook    char(8),
bkllstat    char(1),
bkllspar    char(30),
lf          char(1)
);
create unique index bokltla1 on bokltlaf
(
bkllseid,
bkllbook
);
revoke all on bokltlaf from public ; 
grant select on bokltlaf to public ; 
