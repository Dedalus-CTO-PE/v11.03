create table obsbhiaf
(
obbhvisn    char(8),
obbhline    char(3),
obbhdesc    char(127),
obbhspar    char(127),
lf          char(1)
);
create unique index obsbhia1 on obsbhiaf
(
obbhvisn,
obbhline
);
revoke all on obsbhiaf from public ; 
grant select on obsbhiaf to public ; 
