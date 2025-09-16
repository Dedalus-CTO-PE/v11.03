create table ceavbmaf
(
  cevbdty     varchar2(3) default ' ' not null,
  cevbspc     varchar2(3) default ' ' not null,
  cevbpsc     varchar2(7) default ' ' not null,
  cevbqty     number(8,2) default 0 not null,
  cevbspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceavbma1 primary key( 
cevbdty,
cevbspc,
cevbpsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
