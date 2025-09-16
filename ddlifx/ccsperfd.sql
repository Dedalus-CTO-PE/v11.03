create table ccsperaf
(
  ccperun     char(4) default ' ' not null,
  ccperec     char(8) default ' ' not null,
  ccpedes     char(50) default ' ' not null,
  ccpefky     char(20) default ' ' not null,
  ccpeenc     char(16) default ' ' not null,
  ccpeurn     char(10) default ' ' not null,
  ccpedat     char(8) default ' ' not null,
  ccpetim     char(5) default ' ' not null,
  ccpeqty     decimal(14,2) default 0 not null,
  ccpechg     decimal(14,2) default 0 not null,
  ccpecl1     char(4) default ' ' not null,
  ccpecl2     char(4) default ' ' not null,
  ccpecl3     char(4) default ' ' not null,
  ccpecl4     char(4) default ' ' not null,
  ccpecl5     char(4) default ' ' not null,
  ccpespa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index ccspera1 on ccsperaf
(
ccperun,
ccperec
);
revoke all on ccsperaf from public ; 
grant select on ccsperaf to public ; 
