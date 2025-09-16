create table pmshcpaf
(
  pmhchcpc    char(10) default ' ' not null,
  pmhchcpt    char(2) default ' ' not null,
  pmhctitl    char(10) default ' ' not null,
  pmhcgnam    char(35) default ' ' not null,
  pmhcsnam    char(35) default ' ' not null,
  pmhcinit    char(5) default ' ' not null,
  pmhcgndr    char(1) default ' ' not null,
  pmhcdtob    char(8) default ' ' not null,
  pmhcspc1    char(3) default ' ' not null,
  pmhcspd1    char(8) default ' ' not null,
  pmhcspc2    char(3) default ' ' not null,
  pmhcspd2    char(8) default ' ' not null,
  pmhcspc3    char(3) default ' ' not null,
  pmhcspd3    char(8) default ' ' not null,
  pmhcspc4    char(3) default ' ' not null,
  pmhcspd4    char(8) default ' ' not null,
  pmhcspc5    char(3) default ' ' not null,
  pmhcspd5    char(8) default ' ' not null,
  pmhcrcpt    char(25) default ' ' not null,
  pmhcadr1    char(60) default ' ' not null,
  pmhcadr2    char(60) default ' ' not null,
  pmhcadr3    char(60) default ' ' not null,
  pmhcadr4    char(60) default ' ' not null,
  pmhcadr5    char(60) default ' ' not null,
  pmhcadr6    char(60) default ' ' not null,
  pmhcpost    char(8) default ' ' not null,
  pmhcstat    char(4) default ' ' not null,
  pmhcseml    char(80) default ' ' not null,
  pmhcstel    char(20) default ' ' not null,
  pmhcpagr    char(20) default ' ' not null,
  pmhcpagn    char(20) default ' ' not null,
  pmhcahp1    char(25) default ' ' not null,
  pmhcahp2    char(25) default ' ' not null,
  pmhcahp3    char(25) default ' ' not null,
  pmhcahp4    char(25) default ' ' not null,
  pmhcahp5    char(25) default ' ' not null,
  pmhcprv1    char(10) default ' ' not null,
  pmhcprv2    char(10) default ' ' not null,
  pmhcprv3    char(10) default ' ' not null,
  pmhcprv4    char(10) default ' ' not null,
  pmhcprv5    char(10) default ' ' not null,
  pmhchtel    char(20) default ' ' not null,
  pmhchad1    char(60) default ' ' not null,
  pmhchad2    char(60) default ' ' not null,
  pmhchad3    char(60) default ' ' not null,
  pmhchad4    char(60) default ' ' not null,
  pmhchad5    char(60) default ' ' not null,
  pmhchad6    char(60) default ' ' not null,
  pmhchpcd    char(8) default ' ' not null,
  pmhcheml    char(80) default ' ' not null,
  pmhcdfac    char(8) default ' ' not null,
  pmhcdlac    char(8) default ' ' not null,
  pmhcyacc    decimal(2,0) default 0 not null,
  pmhcatyp    char(3) default ' ' not null,
  pmhchhcp    decimal(3,0) default 0 not null,
  pmhcoslv    char(3) default ' ' not null,
  pmhchcst    decimal(2,0) default 0 not null,
  pmhchcsd    char(8) default ' ' not null,
  pmhcfaxn    char(20) default ' ' not null,
  pmhchfxn    char(20) default ' ' not null,
  pmhcmobn    char(20) default ' ' not null,
  pmhccrdc    char(5) default ' ' not null,
  pmhcwahc    char(10) default ' ' not null,
  pmhcmrbn    char(10) default ' ' not null,
  pmhcnhsn    char(10) default ' ' not null,
  pmhcudf1    char(3) default ' ' not null,
  pmhcudf2    char(3) default ' ' not null,
  pmhcudf3    char(3) default ' ' not null,
  pmhcudf4    char(3) default ' ' not null,
  pmhcudf5    char(3) default ' ' not null,
  pmhcuyn1    char(1) default ' ' not null,
  pmhcuyn2    char(1) default ' ' not null,
  pmhcuyn3    char(1) default ' ' not null,
  pmhcuyn4    char(1) default ' ' not null,
  pmhcuyn5    char(1) default ' ' not null,
  pmhcinsc    char(6) default ' ' not null,
  pmhcipln    char(20) default ' ' not null,
  pmhcidtf    char(8) default ' ' not null,
  pmhcidtt    char(8) default ' ' not null,
  pmhcmpgn    char(20) default ' ' not null,
  pmhcapci    char(1) default ' ' not null,
  pmhcregt    char(3) default ' ' not null,
  pmhcrgdf    char(8) default ' ' not null,
  pmhcrgdt    char(8) default ' ' not null,
  pmhcprdf    char(8) default ' ' not null,
  pmhcprdt    char(8) default ' ' not null,
  pmhctsdf    char(8) default ' ' not null,
  pmhctfdt    char(8) default ' ' not null,
  pmhcvisd    char(8) default ' ' not null,
  pmhcprfc    char(3) default ' ' not null,
  pmhcprfn    char(30) default ' ' not null,
  pmhcabnn    char(11) default ' ' not null,
  pmhcupdf    char(1) default ' ' not null,
  pmhcprmk    char(1) default ' ' not null,
  pmhcstts    char(1) default ' ' not null,
  pmhcdlmi    char(8) default ' ' not null,
  pmhcdlma    char(8) default ' ' not null,
  pmhccdte    char(8) default ' ' not null,
  pmhcctim    char(8) default ' ' not null,
  pmhcwebc    char(10) default ' ' not null,
  pmhclupd    char(8) default ' ' not null,
  pmhclupt    char(8) default ' ' not null,
  pmhcwebu    char(10) default ' ' not null,
  pmhcslgp    char(1) default ' ' not null,
  pmhchoss    char(1) default ' ' not null,
  pmhcptyp    char(3) default ' ' not null,
  pmhcexml    char(1) default ' ' not null,
  pmhcdeac    char(8) default ' ' not null,
  pmhccper    char(6) default ' ' not null,
  pmhcahc1    char(3) default ' ' not null,
  pmhcahc2    char(3) default ' ' not null,
  pmhcahc3    char(3) default ' ' not null,
  pmhcldoc    char(6) default ' ' not null,
  pmhcsdat    char(8) default ' ' not null,
  pmhcedat    char(8) default ' ' not null,
  pmhcnhta    char(20) default ' ' not null,
  pmhcwwcn    char(20) default ' ' not null,
  pmhcwwce    char(8) default ' ' not null,
  pmhcwwcs    char(3) default ' ' not null,
  pmhcsmd1    char(16) default ' ' not null,
  pmhcsmd2    char(16) default ' ' not null,
  pmhcspar    char(18) default ' ' not null,
  lf          char(1)
);
create unique index pmshcpa1 on pmshcpaf
(
pmhchcpc
);
create unique index pmshcpa2 on pmshcpaf
(
pmhcsnam,
pmhcgnam,
pmhchcpc
);
create unique index pmshcpa3 on pmshcpaf
(
pmhcprv1,
pmhchcpc
);
create unique index pmshcpa4 on pmshcpaf
(
pmhcldoc,
pmhchcpc
);
create unique index pmshcpa5 on pmshcpaf
(
pmhccdte,
pmhcctim,
pmhchcpc
);
create unique index pmshcpa6 on pmshcpaf
(
pmhclupd,
pmhclupt,
pmhchcpc
);
create unique index pmshcpa7 on pmshcpaf
(
pmhcmpgn,
pmhchcpc
);
revoke all on pmshcpaf from public ; 
grant select on pmshcpaf to public ; 
