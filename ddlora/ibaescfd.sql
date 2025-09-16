create table ibaescaf
(
  ibespr      varchar2(2) default ' ' not null,
  ibespt      varchar2(3) default ' ' not null,
  ibesseq     varchar2(35) default ' ' not null,
  ibeslas     number(1,0) default 0 not null,
  ibesspar    varchar2(3) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibaesca1 primary key( 
ibespr,
ibespt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibaesca2 on ibaescaf
(
ibespt,
ibespr
)
  tablespace pas_indx; 
