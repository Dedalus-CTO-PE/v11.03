create table mrtcahaf
(
  mrchadmn    varchar2(8) default ' ' not null,
  mrchadat    varchar2(8) default ' ' not null,
  mrchatim    varchar2(8) default ' ' not null,
  mrchwebu    varchar2(10) default ' ' not null,
  mrchndrg    varchar2(4) default ' ' not null,
  mrchdrgv    varchar2(3) default ' ' not null,
  mrchhdrg    varchar2(4) default ' ' not null,
  mrchhdgv    varchar2(3) default ' ' not null,
  mrchnwau    varchar2(17) default ' ' not null,
  mrchicdv    varchar2(5) default ' ' not null,
  mrchpdcd    varchar2(9) default ' ' not null,
  mrchppcd    varchar2(9) default ' ' not null,
  mrchspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtcaha1 primary key( 
mrchadmn,
mrchadat,
mrchatim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
