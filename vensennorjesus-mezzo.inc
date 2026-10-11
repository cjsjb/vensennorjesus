\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 4/4
		\clef "treble"
		\key g \major
		R1  |
		r2 r4 b 8 c'  |
		d' 2 ~ d' 8 r d' e'  |
		d' 2. r8 e' 16 fis'  |
%% 5
		g' 8 g' g' g' 16 fis' 8. fis' 8 e' e'  |
		d' 2. r8 e' 16 fis'  |
		g' 8 g' g' e' 16 a' 8 a' 8. r8 d' 16 d'  |
		d' 8 d' d' b 16 e' ~ e' 4 r8 e' 16 e'  |
		c' 8 c' c' e' 16 d' 8. d' 8 d' c' 16 b ~  |
%% 10
		b 2 r4 b 8 c'  |
		d' 2 ~ d' 8 r d' e'  |
		d' 2. r8 e' 16 fis'  |
		g' 8 g' g' g' 16 fis' 8. fis' 8 e' e' 16 e' ~  |
		e' 8 d' ~ d' 2 r8 c' 16 d'  |
%% 15
		e' 8 e' e' c' 16 fis' 8 fis' 8. r8 d' 16 d'  |
		g' 8 a' g' fis' 16 e' ~ e' 4 r8 e' 16 e'  |
		e' 8 e' e' e' 16 d' 8. d' 8 d' d'  |
		b 2 r8 r16 d' e' fis' 8. -\staccato  |
		e' 8. e' 16 e' 8 c' 16 fis' ~ fis' 4 r8 d' 16 d'  |
%% 20
		d' 8 d' d' b 16 e' ~ e' 4 r8 e' 16 e'  |
		c' 8 c' c' e' 16 d' 8. d' 8 e' fis'  |
		g' 8 -\staccato r16 g' g' g' 8 g' 8. g' 16 g' 8 ( fis' 16 e' 8 )  |
		e' 8. e' 16 e' 8 c' 16 fis' ~ fis' 4 r8 d' 16 d'  |
		g' 8 a' g' fis' 16 e' ~ e' 4 r8 e' 16 e'  |
%% 25
		e' 8 e' e' e' 16 d' 8. d' 8 d' d'  |
		b 2 r  |
		R1
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzo" {
		Tú, Se -- ñor, __ sa -- bes bien
		lo que yo ten -- go guar -- da -- "do en" "mi in" -- te -- rior,
		to -- "do a" -- que -- llo que "me a" -- tur -- de,
		lo que no pue -- "do ol" -- vi -- dar, __
		e -- sas co -- sas que no de -- jan ca -- mi -- nar. __

		Tú, Se -- ñor, __ has -- ta hoy
		"me has" se -- gui -- "do en" ca -- da pa -- so de mi vi -- da, __
		y "me has" da -- do gran -- des co -- sas
		que no pue -- do ol -- vi -- dar, __
		los mo -- men -- tos "que en" mi vi -- da que -- da -- rán.

		Por e -- so ven, Se -- ñor Je -- sús, __
		que te quie -- ro hoy de -- cir __
		que mis o -- jos "se han" a -- bier -- "to
		y" que sin ti no pue -- do más se -- guir. __

		Ven, Se -- ñor Je -- sús, __
		"que aho" -- ra ten -- "go el" co -- ra -- zón __
		con un gri -- to que me pi -- de tu a -- mor.
	}
>>
