create table ceamapaf
(
  cemamgp     varchar2(3) default ' ' not null,
  cemaspc     varchar2(3) default ' ' not null,
  cemapsc     varchar2(7) default ' ' not null,
  cemadqty    number(8,2) default 0 not null,
  cematqty    number(8,2) default 0 not null,
  cemaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceamapa1 primary key( 
cemamgp,
cemaspc,
cemapsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
