create table pmsieraf
(
  pmirrtyp    char(2) default ' ' not null,
  pmircode    char(50) default ' ' not null,
  pmirinum    char(20) default ' ' not null,
  pmirrdat    char(8) default ' ' not null,
  pmirrtim    char(8) default ' ' not null,
  pmirruid    char(10) default ' ' not null,
  pmirecod    char(4) default ' ' not null,
  pmiremes    char(200) default ' ' not null,
  pmirspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsiera1 on pmsieraf
(
pmirrtyp,
pmircode,
pmirinum,
pmirrdat,
pmirrtim
);
create unique index pmsiera2 on pmsieraf
(
pmirrdat,
pmirrtim,
pmirrtyp,
pmircode,
pmirinum
);
create unique index pmsiera3 on pmsieraf
(
pmirinum,
pmirrdat,
pmirrtim,
pmirrtyp,
pmircode
);
revoke all on pmsieraf from public ; 
grant select on pmsieraf to public ; 
