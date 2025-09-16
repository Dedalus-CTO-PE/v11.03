create table ccspcdaf
(
  ccpchcd     char(2) default ' ' not null,
  ccpcdpt     char(8) default ' ' not null,
  ccpcyear    char(4) default ' ' not null,
  ccpcper     char(2) default ' ' not null,
  ccpcpcd     char(8) default ' ' not null,
  ccpccty     char(4) default ' ' not null,
  ccpccst     decimal(18,6) default 0 not null,
  ccpcbct     decimal(18,6) default 0 not null,
  ccpcfbu     decimal(18,6) default 0 not null,
  ccpcrvi     decimal(18,6) default 0 not null,
  ccpcspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccspcda1 on ccspcdaf
(
ccpchcd,
ccpcdpt,
ccpcyear,
ccpcper,
ccpcpcd,
ccpccty
);
revoke all on ccspcdaf from public ; 
grant select on ccspcdaf to public ; 
