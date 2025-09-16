create table ccsaadaf
(
  ccaddef     char(1) default ' ' not null,
  ccadpc      char(10) default ' ' not null,
  ccaddes     char(30) default ' ' not null,
  ccadlv2     char(10) default ' ' not null,
  ccadlv3     char(10) default ' ' not null,
  ccadlv4     char(10) default ' ' not null,
  ccadspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccsaada1 on ccsaadaf
(
ccaddef,
ccadpc
);
create unique index ccsaada2 on ccsaadaf
(
ccaddef,
ccadlv2,
ccadlv3,
ccadlv4,
ccadpc
);
revoke all on ccsaadaf from public ; 
grant select on ccsaadaf to public ; 
