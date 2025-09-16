create table emrlpcaf
(
  emlpuni     varchar2(5) default ' ' not null,
  emlpadm     varchar2(8) default ' ' not null,
  emlpurn     varchar2(8) default ' ' not null,
  emlplpn     varchar2(6) default ' ' not null,
  emlpcno     number(3,0) default 0 not null,
  emlpstc     varchar2(6) default ' ' not null,
  emlprep     number(2,0) default 0 not null,
  emlplty     varchar2(10) default ' ' not null,
  emlpfpn     varchar2(6) default ' ' not null,
  emlppsc     varchar2(4) default ' ' not null,
  emlpspa     varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrlpca1 primary key( 
emlpuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
