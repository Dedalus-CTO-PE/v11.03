create table emrdayaf
(
  emdydat     char(8) default ' ' not null,
  emdycnt     decimal(4,0) default 0 not null,
  emdyspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index emrdaya1 on emrdayaf
(
emdydat
);
revoke all on emrdayaf from public ; 
grant select on emrdayaf to public ; 
