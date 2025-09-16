create table patletrf
(
  dptlelno    varchar2(3) default ' ' not null,
  dptlelin    varchar2(3) default ' ' not null,
  ptletext    varchar2(70) default ' ' not null,
  ptlelvar    number(1,0) default 0 not null,
  ptlepbot    number(2,0) default 0 not null,
  ptleptop    number(2,0) default 0 not null,
  ptleppag    number(3,0) default 0 not null,
  ptleptab    number(2,0) default 0 not null,
  ptlemmfn    varchar2(8) default ' ' not null,
  ptleactv    varchar2(1) default ' ' not null,
  ptlecomm    varchar2(1) default ' ' not null,
  ptleconf    varchar2(1) default ' ' not null,
  ptlespar    varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patletr1 primary key( 
dptlelno,
dptlelin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patletr2 on patletrf
(
dptlelin,
dptlelno
)
  tablespace pas_indx; 
