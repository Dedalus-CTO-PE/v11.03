create table leginvrf
(
  lpinvno     char(8) default ' ' not null,
  lpinvdte    char(8) default ' ' not null,
  lpinalph    char(6) default ' ' not null,
  ldpinvad    char(8) default ' ' not null,
  ldpinvur    char(8) default ' ' not null,
  ldpinvsy    char(1) default ' ' not null,
  lpinvsit    char(6) default ' ' not null,
  lpinvclm    char(3) default ' ' not null,
  lpinvloc    char(2) default ' ' not null,
  lptivamn    decimal(14,2) default 0 not null,
  lptivpat    decimal(14,2) default 0 not null,
  lptivhfd    decimal(14,2) default 0 not null,
  lptivoth    decimal(14,2) default 0 not null,
  lptivjou    decimal(14,2) default 0 not null,
  lptivreb    decimal(14,2) default 0 not null,
  lpinvcan    char(8) default ' ' not null,
  lptivpcs    decimal(14,2) default 0 not null,
  lpinvtyp    decimal(1,0) default 0 not null,
  lpinvblc    char(8) default ' ' not null,
  lpinvcad    char(8) default ' ' not null,
  lptincmi    decimal(1,0) default 0 not null,
  ldptined    char(1) default ' ' not null,
  lpingsta    decimal(14,2) default 0 not null,
  lpingstj    decimal(14,2) default 0 not null,
  lptincmc    char(9) default ' ' not null,
  lpinpmd1    char(30) default ' ' not null,
  lpinpmd2    char(35) default ' ' not null,
  lptinpma    decimal(14,2) default 0 not null,
  lptinmvd    char(4) default ' ' not null,
  lpinvspa    char(15) default ' ' not null,
  lf          char(1)
);
create unique index leginvr5 on leginvrf
(
ldpinvur,
ldpinvad,
lpinvno,
lpinvdte
);
create unique index leginvr4 on leginvrf
(
ldpinvsy,
lpinvsit,
lpinvclm,
lpinalph,
ldpinvad,
lpinvno
);
create unique index leginvr3 on leginvrf
(
ldpinvad,
lpinvno
);
create unique index leginvr2 on leginvrf
(
lpinvdte,
lpinvno
);
create unique index leginvr1 on leginvrf
(
lpinvno
);
revoke all on leginvrf from public ; 
grant select on leginvrf to public ; 
