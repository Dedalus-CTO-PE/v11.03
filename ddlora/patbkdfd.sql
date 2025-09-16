create table patbnkd
(
  kdate       varchar2(8) default ' ' not null,
  krectyp     varchar2(3) default ' ' not null,
  dkpaytyp    varchar2(1) default ' ' not null,
  ptbdamou    number(14,2) default 0 not null,
  ptbdspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patbnk1 on patbnkd
(
kdate,
krectyp,
dkpaytyp
)
  tablespace pas_indx; 
