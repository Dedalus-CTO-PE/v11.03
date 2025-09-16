create table sinvhaaf
(
  sivhdat     varchar2(6) default ' ' not null,
  sivhfno     varchar2(3) default ' ' not null,
  sivhord     varchar2(20) default ' ' not null,
  sivhlin     varchar2(3) default ' ' not null,
  sivhqty     number(7,0) default 0 not null,
  sivhsun     varchar2(15) default ' ' not null,
  sivhcos     number(13,4) default 0 not null,
  sivhpat     varchar2(20) default ' ' not null,
  sivhsta     varchar2(1) default ' ' not null,
  sivhcor     varchar2(7) default ' ' not null,
  sivhcat     varchar2(7) default ' ' not null,
  sivhtyp     varchar2(1) default ' ' not null,
  sivhven     varchar2(20) default ' ' not null,
  sivhtype    number(2,0) default 0 not null,
  sivhspa     varchar2(6) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinvhaa1 primary key( 
sivhdat,
sivhfno,
sivhlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinvhaa2 on sinvhaaf
(
sivhsta,
sivhord,
sivhdat,
sivhfno,
sivhlin
)
  tablespace pas_indx; 
create unique index sinvhaa3 on sinvhaaf
(
sivhord,
sivhcor,
sivhcat,
sivhdat,
sivhfno,
sivhlin
)
  tablespace pas_indx; 
