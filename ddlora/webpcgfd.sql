create table webpcgaf
(
  wbpgclid    varchar2(22) default ' ' not null,
  wbpgtrid    varchar2(24) default ' ' not null,
  wbpgcntr    varchar2(3) default ' ' not null,
  wbpgscnt    varchar2(2) default ' ' not null,
  wbpgsvid    varchar2(4) default ' ' not null,
  wbpgascd    varchar2(50) default ' ' not null,
  wbpgbenp    varchar2(7) default ' ' not null,
  wbpgchga    varchar2(7) default ' ' not null,
  wbpgitmn    varchar2(5) default ' ' not null,
  wbpgnmpt    varchar2(2) default ' ' not null,
  wbpgcode    varchar2(4) default ' ' not null,
  wbpgtext    varchar2(500) default ' ' not null,
  wbpgmsid    varchar2(36) default ' ' not null,
  wbpgspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webpcga1 primary key( 
wbpgclid,
wbpgtrid,
wbpgcntr,
wbpgscnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webpcga2 on webpcgaf
(
wbpgtrid,
wbpgclid,
wbpgcntr,
wbpgscnt
)
  tablespace pas_indx; 
create unique index webpcga3 on webpcgaf
(
wbpgmsid,
wbpgclid,
wbpgcntr,
wbpgscnt
)
  tablespace pas_indx; 
