create table sintraaf
(
  sitanum     varchar2(8) default ' ' not null,
  sitairf     varchar2(20) default ' ' not null,
  sitaref     varchar2(40) default ' ' not null,
  sitadat     varchar2(8) default ' ' not null,
  sitapl      number(14,2) default 0 not null,
  sitaacc     varchar2(14) default ' ' not null,
  sitaud1     varchar2(8) default ' ' not null,
  sitaud2     varchar2(8) default ' ' not null,
  sitaur1     varchar2(15) default ' ' not null,
  sitaur2     varchar2(15) default ' ' not null,
  sitauy1     varchar2(1) default ' ' not null,
  sitauy2     varchar2(1) default ' ' not null,
  sitaspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sintraa1 primary key( 
sitanum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
