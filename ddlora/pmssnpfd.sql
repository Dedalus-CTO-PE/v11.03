create table pmssnpaf
(
  pmsnclcd    varchar2(3) default ' ' not null,
  pmsnvers    varchar2(2) default ' ' not null,
  pmsndesc    varchar2(50) default ' ' not null,
  pmsnetyp    varchar2(1) default ' ' not null,
  pmsnactv    varchar2(1) default ' ' not null,
  pmsndact    varchar2(8) default ' ' not null,
  pmsndiac    varchar2(8) default ' ' not null,
  pmsncuid    varchar2(10) default ' ' not null,
  pmsncdat    varchar2(8) default ' ' not null,
  pmsnctim    varchar2(8) default ' ' not null,
  pmsnuuid    varchar2(10) default ' ' not null,
  pmsnudat    varchar2(8) default ' ' not null,
  pmsnutim    varchar2(8) default ' ' not null,
  pmsnhdpe    varchar2(4) default ' ' not null,
  pmsnhcpe    varchar2(4) default ' ' not null,
  pmsnanse    varchar2(3) default ' ' not null,
  pmsnspar    varchar2(39) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmssnpa1 primary key( 
pmsnclcd,
pmsnvers)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
