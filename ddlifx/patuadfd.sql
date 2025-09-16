create table patuadaf
(
dptuaadm    char(8),
ptuadate    char(8),
ptuatime    char(8),
ptuaour     char(8),
ptuanur     char(8),
ptuaopr     char(30),
ptuaspar    char(19),
lf          char(1)
);
create unique index patuada1 on patuadaf
(
dptuaadm,
ptuadate,
ptuatime
);
revoke all on patuadaf from public ; 
grant select on patuadaf to public ; 
