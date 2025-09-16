create table patebhaf
(
  ptehbthn    varchar2(8) default ' ' not null,
  ptehhfgp    varchar2(6) default ' ' not null,
  ptehstdt    varchar2(8) default ' ' not null,
  pteheddt    varchar2(8) default ' ' not null,
  ptehbhtl    number(14,2) default 0 not null,
  ptehtrib    number(6,0) default 0 not null,
  ptehdtbc    varchar2(8) default ' ' not null,
  ptehtmbc    varchar2(8) default ' ' not null,
  ptehoper    varchar2(4) default ' ' not null,
  dpteheet    varchar2(1) default ' ' not null,
  ptehefnm    varchar2(18) default ' ' not null,
  dptehflg    varchar2(2) default ' ' not null,
  ptehspar    varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patebha1 primary key( 
ptehbthn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patebha2 on patebhaf
(
dptehflg,
ptehbthn
)
  tablespace pas_indx; 
