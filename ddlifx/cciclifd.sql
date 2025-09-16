create table ccicliaf
(
  ccclsite    char(6) default ' ' not null,
  ccclctyp    char(6) default ' ' not null,
  ccclspar    char(10) default ' ' not null,
  lf          char(1)
);
create unique index cciclia1 on ccicliaf
(
ccclsite,
ccclctyp
);
revoke all on ccicliaf from public ; 
grant select on ccicliaf to public ; 
