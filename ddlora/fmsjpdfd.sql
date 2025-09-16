create table fmsjpdaf
(
  fmjpbat     varchar2(5) default ' ' not null,
  fmjpjty     varchar2(1) default ' ' not null,
  fmjpjid     varchar2(6) default ' ' not null,
  fmjppdat    varchar2(8) default ' ' not null,
  fmjpcdat    varchar2(8) default ' ' not null,
  fmjpudat    varchar2(8) default ' ' not null,
  fmjpdat     varchar2(8) default ' ' not null,
  fmjptyp     number(1,0) default 0 not null,
  fmjprev     number(1,0) default 0 not null,
  fmjpdtot    number(14,2) default 0 not null,
  fmjpauth    varchar2(1) default ' ' not null,
  fmjpspar    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsjpda1 primary key( 
fmjpbat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsjpda2 on fmsjpdaf
(
fmjpjty,
fmjpjid,
fmjpbat
)
  tablespace pas_indx; 
create unique index fmsjpda3 on fmsjpdaf
(
fmjpauth,
fmjpbat
)
  tablespace pas_indx; 
