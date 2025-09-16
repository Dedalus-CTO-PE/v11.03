create table ccsoapaf
(
  ccoacid     char(6) default ' ' not null,
  ccoadep     char(3) default ' ' not null,
  ccoavty     char(3) default ' ' not null,
  ccoapri     decimal(14,2) default 0 not null,
  ccoaspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccsoapa1 on ccsoapaf
(
ccoacid,
ccoadep,
ccoavty
);
revoke all on ccsoapaf from public ; 
grant select on ccsoapaf to public ; 
