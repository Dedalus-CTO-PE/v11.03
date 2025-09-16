create table ceamapaf
(
  cemamgp     char(3) default ' ' not null,
  cemaspc     char(3) default ' ' not null,
  cemapsc     char(7) default ' ' not null,
  cemadqty    decimal(8,2) default 0 not null,
  cematqty    decimal(8,2) default 0 not null,
  cemaspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceamapa1 on ceamapaf
(
cemamgp,
cemaspc,
cemapsc
);
revoke all on ceamapaf from public ; 
grant select on ceamapaf to public ; 
