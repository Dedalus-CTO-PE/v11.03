create table ceatemaf
(
  ceteimp     char(6) default ' ' not null,
  cetespc     char(3) default ' ' not null,
  cetepsc     char(7) default ' ' not null,
  ceteqty     decimal(8,2) default 0 not null,
  cetespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceatema1 on ceatemaf
(
ceteimp,
cetespc,
cetepsc
);
revoke all on ceatemaf from public ; 
grant select on ceatemaf to public ; 
