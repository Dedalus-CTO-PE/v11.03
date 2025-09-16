create table pmsbbiaf
(
pmbbseid    varchar2(4),
pmbbvisn    varchar2(8),
pmbburno    varchar2(8),
pmbbaddt    varchar2(8),
pmbbifdt    varchar2(8),
pmbbitdt    varchar2(8),
pmbbamnt    number(14,2),
pmbbpdrg    varchar2(9),
pmbbcflg    varchar2(1),
pmbbstat    varchar2(1),
pmbbprnt    varchar2(1),
pmbbward    varchar2(3),
pmbbambs    varchar2(9),
pmbbcare    varchar2(3),
pmbbspar    varchar2(5),
lf          varchar2(1),
constraint pmsbbia1 primary key( 
pmbbseid,
pmbbvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsbbiaf for pmsbbiaf;
