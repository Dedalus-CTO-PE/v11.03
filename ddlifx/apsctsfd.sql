create table apsctsaf
(
  apctcode    char(3) default ' ' not null,
  apctdesc    char(35) default ' ' not null,
  apctspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index apsctsa1 on apsctsaf
(
apctcode
);
revoke all on apsctsaf from public ; 
grant select on apsctsaf to public ; 
