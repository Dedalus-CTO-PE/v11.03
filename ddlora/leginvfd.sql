create table leginvrf
(
  lpinvno     varchar2(8) default ' ' not null,
  lpinvdte    varchar2(8) default ' ' not null,
  lpinalph    varchar2(6) default ' ' not null,
  ldpinvad    varchar2(8) default ' ' not null,
  ldpinvur    varchar2(8) default ' ' not null,
  ldpinvsy    varchar2(1) default ' ' not null,
  lpinvsit    varchar2(6) default ' ' not null,
  lpinvclm    varchar2(3) default ' ' not null,
  lpinvloc    varchar2(2) default ' ' not null,
  lptivamn    number(14,2) default 0 not null,
  lptivpat    number(14,2) default 0 not null,
  lptivhfd    number(14,2) default 0 not null,
  lptivoth    number(14,2) default 0 not null,
  lptivjou    number(14,2) default 0 not null,
  lptivreb    number(14,2) default 0 not null,
  lpinvcan    varchar2(8) default ' ' not null,
  lptivpcs    number(14,2) default 0 not null,
  lpinvtyp    number(1,0) default 0 not null,
  lpinvblc    varchar2(8) default ' ' not null,
  lpinvcad    varchar2(8) default ' ' not null,
  lptincmi    number(1,0) default 0 not null,
  ldptined    varchar2(1) default ' ' not null,
  lpingsta    number(14,2) default 0 not null,
  lpingstj    number(14,2) default 0 not null,
  lptincmc    varchar2(9) default ' ' not null,
  lpinpmd1    varchar2(30) default ' ' not null,
  lpinpmd2    varchar2(35) default ' ' not null,
  lptinpma    number(14,2) default 0 not null,
  lptinmvd    varchar2(4) default ' ' not null,
  lpinvspa    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint leginvr1 primary key( 
lpinvno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index leginvr5 on leginvrf
(
ldpinvur,
ldpinvad,
lpinvno,
lpinvdte
)
  tablespace pas_indx; 
create unique index leginvr4 on leginvrf
(
ldpinvsy,
lpinvsit,
lpinvclm,
lpinalph,
ldpinvad,
lpinvno
)
  tablespace pas_indx; 
create unique index leginvr3 on leginvrf
(
ldpinvad,
lpinvno
)
  tablespace pas_indx; 
create unique index leginvr2 on leginvrf
(
lpinvdte,
lpinvno
)
  tablespace pas_indx; 
