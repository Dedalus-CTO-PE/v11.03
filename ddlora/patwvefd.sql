create table patwvetf
(
  dvadmno     varchar2(8) default ' ' not null,
  vclmno      varchar2(20) default ' ' not null,
  ptwvauth    varchar2(20) default ' ' not null,
  ptwvdate    varchar2(8) default ' ' not null,
  ptwvcont    varchar2(50) default ' ' not null,
  ptwvtnum    varchar2(20) default ' ' not null,
  vspare      varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patwvet1 primary key( 
dvadmno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
