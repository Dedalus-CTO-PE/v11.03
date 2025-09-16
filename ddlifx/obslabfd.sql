create table obslabaf
(
oblbvisn    char(8),
oblbline    char(3),
oblbdesc    char(127),
oblbspar    char(127),
lf          char(1)
);
create unique index obslaba1 on obslabaf
(
oblbvisn,
oblbline
);
revoke all on obslabaf from public ; 
grant select on obslabaf to public ; 
