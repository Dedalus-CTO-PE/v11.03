create table webpcfaf
(
  wbpfclid    varchar2(22) default ' ' not null,
  wbpftrid    varchar2(24) default ' ' not null,
  wbpfcntr    varchar2(3) default ' ' not null,
  wbpfevdt    varchar2(8) default ' ' not null,
  wbpfmeid    varchar2(2) default ' ' not null,
  wbpfmsid    varchar2(36) default ' ' not null,
  wbpfspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webpcfa1 primary key( 
wbpfclid,
wbpftrid,
wbpfcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webpcfa2 on webpcfaf
(
wbpftrid,
wbpfclid,
wbpfcntr
)
  tablespace pas_indx; 
